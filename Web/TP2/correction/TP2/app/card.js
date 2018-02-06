
// var CardComponent = ng.Component({
//   selector: 'card'
// })
// .View({
//   templateUrl: 'views/card.html'
// })
// .Class({
//   constructor: function(){
//   }
// });

 MemoApp.
 directive('card', function() {
  return {
    restrict: 'E',
    scope: {
      card: '=',
      check: '&'
    },
    templateUrl: 'views/card.html',
    controller: function($scope, $rootScope){
      
      $scope.clickCard = function(){
        if(!$rootScope.avoidCardClick){
          $scope.card.clicked = !$scope.card.clicked;
          if($scope.card.clicked){
            $scope.check().apply();
          }
        }
      };
    }
  };
});