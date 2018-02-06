$(function() {
    $('#bt').click(function() {
        $.ajax({
                type: 'GET',
                url: 'https://api.tisseo.fr/v1/lines.json?key=a3732a1074e2403ce364ad6e71eb998cb',
                dataType: "json",
            })
            .done(function(data) {
                $("#showliste").html("<ul></ul>"); //sinon avec prepend et append
                data.lines.line.forEach(function(line) {
                    $("#showliste ul").append(
                        $("<li>" + line.shortName + " - " + line.name + "</li>")
                        .css("color", line.bgXmlColor)
                        .click(function() {
                            $.ajax({
                                    type: 'GET',
                                    url: 'http://api.tisseo.fr/v1/stop_points.json?key=a3732a1074e2403ce364ad6e71eb998cb&displayCoordXY=1&lineId=' + line.id,
                                    dataType: "json",
                                })
                                .done(function(data) {
                                    var stops = [];
                                    data.physicalStops.physicalStop.forEach(function(s) {
                                        var mark = {
                                            long: s.x,
                                            lat: s.y,
                                            name: s.name
                                        };
                                        stops.push(mark);
                                    });
                                    var markers = {
                                        "color": line.bgXmlColor,
                                        "stops": stops
                                    };
                                    console.log("markeur recup");
                                    console.log(markers.stops);
                                    if (markers.stops.length == 0) {
                                        alert("Line without stops (API bug)");
                                    } else {
                                        init_map("mapLigne", markers);
                                    }
                                })
                        }))
                });
            });
    });
});