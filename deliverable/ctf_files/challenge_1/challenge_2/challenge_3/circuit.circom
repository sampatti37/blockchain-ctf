pragma circom 2.0.0;

template foo () {
    signal input in1;
    signal input in2;
    signal output out;
    ??? <== ??? * ???;
}

template foo2 () {
   signal input in1;
   signal input in2;
   signal input in3;
   signal output out;
   component x = foo();
   component y = foo();

   x.in1 <== in1;
   x.in2 <== in2;
   y.in1 <== x.out;
   y.in2 <== in3;
   out <== y.out;
}


component main {public [in1,in2,in3]} = foo2();