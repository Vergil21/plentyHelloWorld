<?hh //strict
 
    namespace plentyHelloWorld\Providers;
 
 
    use Plenty\Plugin\ServiceProvider;
 
    class plentyHelloWorldServiceProvider extends ServiceProvider
    {
 
        /**
         * Register the service provider.
         */
 
        public function register():void
        {
            $this->getApplication()->register(plentyHelloWorldRouteServiceProvider::class);
        }
    }