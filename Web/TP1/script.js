window.addEventListener('load', initEvent, false);

function initEvent() {
	document.getElementById("bt").addEventListener('click', initBt, false);
}

function initBt() {

	var req = new XMLHttpRequest();
	req.open("GET", "https://api.tisseo.fr/v1/lines.json?key=a3732a1074e2403ce364ad6e71eb998cb", true);


	req.onreadystatechange = function () {
		if (req.readyState == 4 && req.status == 200) {
			var donnes = JSON.parse(req.responseText);
			console.log("yes");
			var liste = "<ul>";
			/* document.getElementById('showliste').replaceChild(monUl,document.getElementById('showliste').firstChild);*/
			donnes.lines.line.forEach(function (y) {
				var nomStation = y.shortName + " - " + y.name;
				liste += "<li>" + nomStation + "</li>";
			});
			liste += "</ul>";
			console.log(document.querySelector("#showliste").innerHTML);
			document.querySelector("#showliste").innerHTML = liste;
		}

		else
			if (!document.getElementById('showliste').firstChild)
				document.getElementById("showliste").appendChild(document.createTextNode("On attend"));

	}
	req.send(null);

}


