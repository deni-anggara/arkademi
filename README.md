//no 1
function getProfile() {
  return {
    name: 'Deni Anggara Hendriawan',
    age: '22',
    address: 'RT 002, RW 001, Desa Wanoja, Kecamatan Salem',
    hobbies: ['football', 'fishing'] //Array,
    is_married: single //Boolean,
    school: {
      highSchool: 'SMAN 1 Salem',
      university: 'Institut Teknologi Telkom Purwokerto'
    }, // Object
    skills: [{
      name: 'Ms Office',
      level: 4 dari 5
    },{
      name: 'GNS3',
       level: 3.5 dari 5
    },{
    interest_in_coding: yes //Boolean,
    }] // Array Of Object
  }
}
//no 2
function is_username_valid(username) {
  // Huruf dari a sampai z
  var lowercaseRe = /[a-z]/g;
  
  // check panjang string dan memastikan karater yang ditemukan sama dengan panjang string
	if(username.length == 5-9 && username.match(lowercaseRe).length == username.length) {
    	return true;
    }
    return false;
}

function is_password_valid(password) {
  // huruf keci a sampai z
	var lowercaseRe = /[a-z]/g;
  
  // huruf besar A sampai Z
  var uppercaseRe = /[A-Z]/g;

  // angka dari 0 sampai 9
  var numberRe = /[0-9]/g;

  // karater unik _@#$ atau %
  var specialRe = /[_@#$%]/g;

  if(password.length == 8
     && lowercaseRe.test(password)
     && uppercaseRe.test(password)
     && numberRe.test(password)
     && specialRe.test(password)) {
     return true;
  }

  return false;
}
//no 3
<?php
 
function right($string, $n)
{
      $balik = strrev($string);
      $hasil = strrev(substr($balik, 0, $n));
      return $hasil;
}
 
echo right("banananana", 6);
 
?>
//no 4
function print_picture(size) {
  const star = ' * ';
  const line = ' = ';

  // bukan bilangan ganjil
  if(size % 2 == 0) return;

  // buat header berada di tengah
  console.log(' '.repeat(size / 2) + '--- panjang ---' + ' '.repeat(size / 2));

  for(var row = 0;  < size; row++) {
    // bintang di tengah
    if(Math.floor(size / 2) === row) {
      console.log(star.repeat(size));
    }else {
      // bintang - garis - bintang
      console.log(star+line.repeat(size - 2)+star);
    }
  }
}
//no 5 while(count > 0 ){
  	var item = generateRandomString();
    if(!items.includes(item)){
    	items.push(item);
      console.log(item);
    count--;
    }
  }
}

function generateRandomString(){
  const character = 'abcdefghijklmnopqrstuvwxyz1234567890';
  var maxLength = 32;
  var randomString = '';

  for(var i = 0; i <= maxLength; i++) {
   	var indexGen = Math.floor(Math.random() * character.length);
    randomString += character[indexGen];
  }

  return randomString;
}


//no 6 a//
<?php
$db_host = 'localhost'; // Nama Server
$db_user = 'root'; // User Server
$db_pass = ''; // Password Server
$db_name = 'tutorial'; // Nama Database

$conn = mysqli_connect($db_host, $db_user, $db_pass, $db_name);
if (!$conn) {
	die ('Gagal terhubung MySQL: ' . mysqli_connect_error());	
}

$table_name = 'project';

$sql = 'CREATE TABLE IF NOT EXISTS `' . $table_name . '` (
		  `id` int(11) NOT NULL AUTO_INCREMENT,
		  `name` int(11) NOT NULL,
		  `id_work` date NOT NULL,
		  `id_salary` tinyint(4) NOT NULL,
		  PRIMARY KEY (`id`),
		  KEY `name` (`name`)
		) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=1';
		
$query = mysqli_query($conn, $sql);

if (!$query) {
	die ('ERROR: Tabel ' . $table_name . ' gagal dibuat: ' . mysqli_error($conn));
}

echo 'Tabel ' . $table_name . ' berhasil dibuat <br/>';

$sql = "INSERT INTO `$table_name` (`id`, `name`, `work_`, `salary`) 
		VALUES (1, Rebecca, 'Frontend Dev', 10.000.000),
				(2, Vita, 'Backend Dev', 12.000.000)";
$query = mysqli_query($conn, $sql);

if (!$query) {
	die ('ERROR: Data gagal dimasukkan pada tabel ' . $table_name . ': ' . mysqli_error($conn));
}

echo 'Data berhasil dimasukkan pada tabel ' . $table_name . '';

//
