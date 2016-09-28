<?hh //strict
 
    namespace plentyHelloWorld\Providers;
 
 
    use Plenty\Plugin\RouteServiceProvider;
    use Plenty\Plugin\Routing\Router;
 
    class plentyHelloWorldRouteServiceProvider extends RouteServiceProvider
    {
        public function map(Router $router):void
        {
 			$router->get('hello','plentyHelloWorld\Controllers\ContentController@sayHello');

        }
    }