
<h1 align="center"><strong>Password Login System</strong></h1>
<p align="center"><em>Project Documentation</em></p>

<table width="100%">
  <tr>
    <th width="25%">Subject</th>
    <td width="75%">Programming Fundamentals Lab</td>
  </tr>
  <tr>
    <th>Project</th>
    <td>Password Login System</td>
  </tr>
  <tr>
    <th>Language</th>
    <td>C++</td>
  </tr>
  <tr>
    <th>Group </th>
    <td>Stack Builders</td>
  </tr>
  <tr>
    <th>Members</th>
    <td>Sawaira, Tahreem, Habiba</td>
  </tr>
  <tr>
    <th>Department</th>
    <td>BSAI / BSCY</td>
  </tr>
  <tr>
    <th>Semester</th>
    <td>First (1st)</td>
  </tr>
</table>

<h2 align="center"><strong>Password Login System</strong></h2>
 <p> 
  For Our Programming Fundamentals Lab Project, we built a Password Login System in C++. The Program allows users to sign up with a username and password and then logIn using those details. If someone enters te wrong password three times their access will be blocked. Below we explain some important part of the program with the actual code and a short descrption of what i does.
 </p>
 <h3> Declaring Contants and Arrays:</h3>
    <em> const int MAX_USRS = 10; </em> <br> 
    <em> const int MAX_ATTEMPTS = 3; </em> <br>
    <em> const int MIN_PASS_LEN = 6; </em> <br>
    <em> string usernames[MAX_USERS]; </em> <br> 
    <em> string Passwords [MAX_USERS]; </em> <br> 
    <em> int totalUsers = 0; </em> <br>
 <br>
  Constants set the limits for users, attempts and password length. Two arrays store all usernnames and Passwords side by side -- the same index in both belongs to one parson. totalusers counts how many accounts exist and tells the program where to save the next one.
 <h3>Menu Loop and Input</h3>
  <em> while (ture) { <br>
    cout << "1. Sign Up\n 2. Log In\n 3. Exit \n Your Choice: "; <br>
    cin >> choice; <br>
    if (cin.fail()) { <br>
    cin.clear(); <br>
    cin.ignore(1000, '\n'); <br>
   continue; }
  } </em><br>
  <br>
 Here we use while loop in ininity y using TRUE in condition. <br>
 The main Question in this Loop is that why we use this <b>if(cin.fail()) </b> if statement is because if user try to Enter any other datatype it will show error adn tell you to try again and choice the option again. 
 <br>
 And if we talk about <b>cin.clear</b> and <b>cin.ignore</b> it will control the <b> Buffer and error </b> if the user enter any wrong datatype.
 <br>
<h1 align="center"><strong>Funtions Used in Program:</strong></h1>
We have <b> 5 Functions </b> that we use in this program. <br>
Let talk about the usage of these functions. <br>
 <h3>1. bool usernameExists(string uname):</h3>
 This function is used in Sign-Up Function. <br>
 <b>Work: </b> <br>
 In the start we use bool datatype for the true and false value. The main work of this function is to check if the user name is already exist or not during Sign-Up Function. <br>
 If the User name already exist it will give us warnig and tell us to write the username again ad take us back to the start of the function.
 <br>
 <h3>2. int findUser(string uname):</h3>
 This Function is used in Log-In Function. <br>
 <b> Work </b> <br>
 The actual work of this function in log-I Fucntion is help to checks if he userame exists or not. If the username does not exists it give us the warning to sign-Up first and then log-In. 
 <br>
 <h3>3. string getHiddenInput():</h3>
 <b> Work </b> <br>
 This Function hides the password entered by the user by displaying <b>*</b> characters instead of the actual text on the screen. It improves security and privacy by preventing others from viewing the password during input. The original password is still stored internally for authentication and verification purposes.

<h2 align="center"><strong>Main Fuctions:</strong></h2>
 <h3>4. void signUp()</h3>
 Sign-Up Function is the main and First part of the program. In which we enter the username and password and <b>(make sure not use space when you enter the username) </b> <br> And you also have to confirm the password too.
 <br>
 <h3>5. void log-In()</h3>
 Log-In function is the Second main function after sign-Up Function. You will able to use this function only if you sign-Up first other-wise it will give you the warning to sign-Up first. <br>
 Also This function Provide you the option of only <b> three attempts of password </b> if you enter the wrong password.
 <br>
 <h4> Last but not the least, Majority of People will have the same Question: </h4> 
 <h4> Question:</h4> What if we want to exit the program after adding the required accounts?
<h4> Answer:</h4> As you all know in the start of the main function we use infinite while  loop so it will give the choice to <b>Sign-Up, log-In and Exit </b> option again and again even we aready entered all information. <br>
So what you can do is just choose <b> NO. 3 Exit </b> to leave the program Completely.





