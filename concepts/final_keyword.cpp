struct base {
   virtual void f();
};
struct derived : base {
   void f() final;       // virtual as it overrides base::f
};
struct mostderived : derived {
   //void f();           // error: cannot override!
};
