
-- SUMMARY --

The Korora kstarter profile is derived from the DuaelFr's starter profile
as proposed at https://github.com/DuaelFr/starter

The main difference is that the Korora profile allows you to build your development project 
using one of the 3 following starter themes :
- Omega 4
- Bootstrap 3
- Foundation 4
and one of the 2 following admin themes :
- Adminimal
- Rubik

-- INSTALLATION --

1) Uncompress the profile's archive on your local drive at the desired location.

2) Rename the uncompressed directory to your preferred name.
mv /your/desired/location/kstarter-x.x.x /your/desired/location/<your-project>

3) Change directory to profile's root
cd /your/desired/location/<your-project>/

4) Rename the profile
./scripts/profile-rename.sh <your-profile>

5) Edit profiles files to set your distribution up.
- Edit the <your-profile>.info file, change the profile name and description. Comment/uncomment dependencies as desired.
- Edit the drupal-org.make file and comment/uncomment corresponding modules/themes/libraries

6) Build the distribution
./scripts/build.sh

7) Create an Apache vhost
The vhost must be set on the /your/desired/location/<your-project>/www directory

8) Run the Drupal install
- create the database
drush sql-create --db-su=<sql-root-name> --db-su-pw=<sql-root-password> --db-url="mysql://<db-username>:<db-password>@localhost/<dbname>

- launch the install process
drush site-install <your-profile> --db-url="mysql://<db-username>:<db-password>@localhost/<dbname>

or

use the graphic interface at http://<your-vhost>/install.php