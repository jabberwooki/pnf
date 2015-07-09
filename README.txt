
-- INSTALLATION D'UNE INSTANCE DE DEV PARCS NATIONAUX --

1) Cloner le projet pnf depuis Github.

2) Ajouter la branch develop
git checkout -b develop origin/develop

3) Aller dans le répertoire mda34
Vérifier que vous êtes bien sur la branch develop.

4) Construire la distribution pnf à l'aide du script build.sh.
./scripts/build.sh

5) Créer la base de données pour le site de parc que vous voulez installer.
drush sql-create --db-su=root-login --db-su-pw=root-pass --db-url="mysql://db-username:db-password@localhost/db-name"

6) Créer le vhost Apache du nouveau site.
créer un vhost www.nom-du-parc.dev
Le vhost doit pointer sur le répertoire .../pnf/www
Ce qui donne par exemple pour ubuntu un fichier pncevennes.conf contenant :

-----
<VirtualHost *:80>
	ServerAdmin webmaster@localhost
	ServerName www.cevennes-parcnational.dev

	DocumentRoot /home/toto/dev/pnf/www
	<Directory /home/toto/dev/pnf/www>
		Options Indexes FollowSymLinks MultiViews
		AllowOverride All
		Require all granted
	</Directory>

	ErrorLog ${APACHE_LOG_DIR}/error.log

	# Possible values include: debug, info, notice, warn, error, crit,
	# alert, emerg.
	LogLevel warn

	CustomLog ${APACHE_LOG_DIR}/access.log combined
</VirtualHost>
-----

7) Lancer l'install via l'interface
- soit via l'interface Drupal, par ex. à l'url http://www.cevennes-parcnational.dev/
- soit via drush en se plaçant dans le répertoire de site correspondant, par ex. sites/cevennes-parcnational.fr/
et avec la commande :
drush si pnf --db-url="mysql://db-username:db-password@localhost/db-name"

8) Paramétrage des répertoires /tmp et /sites/all/translations
Dans le navigateur, aller sur les pages suivantes et enregistrez-les :
http://www.mda34.dev/admin/config/media/file-system
et
http://www.mda34.dev/admin/config/regional/language/update

9) Importation des traductions françaises
Aller sur la page /admin/config/regional/translate/update et cliquer sur "Check manually".
Une fois la vérification terminée, la langue French étant cochée, cliquer sur Update translations.
Les fichiers de traductions sont téléchargés dans /sites/all/translations, puis importées dans la base de données.

10) Développez !

