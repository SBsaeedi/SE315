//mathematics functions
int sum(int a,int b)
return a+b;

//adding another method
int sub(int a,int b)
retur a-b;


//Now we are done basic demo and adding multiplication function

int mul()
return a*b;



//This is a practice code for javascript
   function validate_regex() {
            exp = /^((\\+[1-9]{1,4}[ \\-]*)|(\\([0-9]{2,3}\\)[ \\-]*)|([0-9]{2,4})[ \\-]*)*?[0-9]{3,4}?[ \\-]*[0-9]{3,4}?$/
            if (t4.value.match(exp)) {
                merror.innerHTML = "Valid Phone Number";
                merror.style.color = "green";
            } else {
                merror.innerHTML = "Invalid Phone Number, Try Again!";
                merror.style.color = "red";
            }
            exp1 = /^(((?=.*[a-z])(?=.*[A-Z]))|((?=.*[a-z])(?=.*[0-9]))|((?=.*[A-Z])(?=.*[0-9])))(?=.{6,})/
            if (t2.value.match(exp1)) {
                perror.innerHTML = "Medium password";
                perror.style.color = "green";
            } else {
                perror.innerHTML = "Weak password";
                perror.style.color = "red";
            }


            exp2 = /^([a-zA-Z0-9_\-\.]+)@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.)|(([a-zA-Z0-9\-]+\.)+))([a-zA-Z]{2,4}|[0-9]{1,3})(\]?)$/
            if (t5.value.match(exp2)) {
                eerror.innerHTML = "Valid Email Format";
                eerror.style.color = "green";
            } else {
                eerror.innerHTML = "Invalid Email Format, Try Again";
                eerror.style.color = "red";
            }
