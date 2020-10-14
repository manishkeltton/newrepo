<?php

  interface father
  {
     public function parent1_method();
  }
  interface mother
  {
     public function parent2_method();
  }
  interface child extends father, mother
  {
    public function child_method();
  }

  class main implements child
  {
        public function parent1_method()
        {
             echo "Parent1 interface";
        }
  
        public function parent2_method()
        {
             echo "Parent2 interface";
        }

        public function child_method()
        {
             echo "Child Method";
        }
  }


  obj = new main();
  
  obj -> parent1_method();
  obj -> parent2_method();
  obj -> child_method();

?>





















