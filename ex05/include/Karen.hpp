#ifndef _KAREN_HPP_
# define _KAREN_HPP_

# include <string>

class Karen
{
    public:
        Karen();
        ~Karen();
        void    complain(std::string level);
    private:
        static const std::string   DEBUG_MSG;
        static const std::string   INFO_MSG;
        static const std::string   WARNING_MSG;
        static const std::string   ERROR_MSG;
        static const int           DEBUG_INDEX;
        static const int           INFO_INDEX;
        static const int           WARNING_INDEX;
        static const int           ERROR_INDEX;
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
        void (*const functionArray[])(void);
};

#endif