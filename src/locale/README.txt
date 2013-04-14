== Red Eclipse Localization ==

1. Run ./update-pot to extract marked translatable strings from C++ and
   Cubescript into a template redeclipse.pot file

   1.2 Edit the redeclipse.pot header if needed

Either
2. Run ./init-po $LC (where $LC is your language code, example: sv_SE)
   to initialize a language-specific redeclipse.po file (located in the
   $LC/LC_MESSAGES/ directory)

Or
2. Run ./update-po to update all redeclipse.po files with new information from
   the redeclipse.pot template

3. Translate the redeclipse.po file (hint: use a po-editor, for example
   virtaal)

4. Run ./compile-mo to compile all redeclipse.po files into redeclipse.mo
   files and (automatically) install them into data/locale/

5. Run redeclipse, if you want to test a languge other than that of your
   system use for example: LANGUAGE=sv_SE ./redeclipse.sh
