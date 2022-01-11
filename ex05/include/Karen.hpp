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
        static const std::string    DEBUG_MSG;
        static const std::string    INFO_MSG;
        static const std::string    WARNING_MSG;
        static const std::string    ERROR_MSG;
        static const int            DEBUG_INDEX = 0;
        static const int            INFO_INDEX = 1;
        static const int            WARNING_INDEX = 2;
        static const int            ERROR_INDEX = 3;
        static const int            INVALID_INDEX = 4;
        typedef void (Karen::*memFuncPtr)(void);
        memFuncPtr                  funcs[4];
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
};

#endif