<?php
$name=$_POST["Name"];
echo$name;
$email=$_POST["email"];
$mobileno=$_POST["Number"];
if(!preg_match("/^[a-zA-z]*$/",$name))
{
   $ErrMsg="only alphabets and whitespace are allowed.";
    echo$ErrMsg;
}else{
   echo$name;
}
$pattern="^[_a-z0-9-]+(\.[a-z0-9-]+)*@[a-z0-9-]+(\.[a-z0-9-]+)*(\.[a-z]{2,3})$^";
if(!preg_match($pattern,$email))
{
$ErrMsg="email is not valid.";
echo$ErrMsg;
}else{
echo"your valid email address is:".$email;
}
if(!preg_match('/^[0-9]*$/',$mobileno))
{
$ErrMsg="only numeric value is allowed.";
  echo$ErrMsg;
}else{
echo $mobileno;
}
?>
