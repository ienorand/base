// internationalisation
#ifndef __I18N_H__
#define __I18N_H__

struct i18nmanager
{
    const char *domain;
    char *basepath;
    char *locale;

    i18nmanager(const char *domain, char *basepath); // initialize locale system
};

#endif // __I18N_H__
