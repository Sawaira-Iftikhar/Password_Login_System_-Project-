
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
    <em> int totalUsers = 0; </em>
   
 <h3>Menu Loop and Input</h3>
  <em> while (ture) { <br>
    cout << "1. Sign Up\n 2. Log In\n 3. Exit \n Your Choice: "; <br>
    cin >> choice; <br>
    if (cin.fail()) { <br>
    cin.clear(); <br>
    cin.ignore(1000, '\n'); <br>

    }
  } </em><br>
