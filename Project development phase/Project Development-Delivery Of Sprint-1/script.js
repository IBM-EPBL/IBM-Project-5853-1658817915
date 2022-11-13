//for index form

function vfun(){
	var username=document.forms["myform"]["username"].value;
	var password=document.forms["myform"]["password"].value;

if(username==null  || username==""){
	    document.getElementById("errorBox").innerHTML = "enter the user name";
	         return false;

}

if(password==null  || password==""){
	    document.getElementById("errorBox").innerHTML = "enter the password";
	         return false;
}
if (username != '' && password != ''){
	alert("Login successfully");
}	
}

//for register form 2

function vfun(){
	  var username1=document.forms["myform2"][username1].value;
	  var email1=document.forms["myform2"][email1].value;
	  var password1=document.forms["myform2"][password1].value;
	  var password2=document.forms["myform2"][password2].value;

	if(username==null || username=="" ){
		document.getElementById("errorBox").innerHTML = "enter the user name";
		   return false;	   
	} 
   
    if(email1==null || email1=="" ){
		document.getElementById("errorBox").innerHTML = "enter the email";
		   return false;	   
	} 
	if(password1==null || password1=="" ){
		document.getElementById("errorBox").innerHTML = "enter the password";
		   return false;	   
	} 

    if(password2==null || password2=="" ){
		document.getElementById("errorBox").innerHTML = "enter the password";
		   return false;	   
	} 

if(password1 != password2){
	    document.getElementById("errorBox").innerHTML = "password dont match";
	       return false;
}

    if(username1 != '' && password1 != '' && password2 != '' && email1)
        alert("Register successfully");
}
