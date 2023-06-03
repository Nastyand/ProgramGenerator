#ifndef CLASSUNIT_H
#define CLASSUNIT_H
#include "unit.h"
#include <vector>

class ClassUnit : public Unit
{
    using Fields = std::vector< std::shared_ptr< Unit >>;
    public:
        enum AccessModifier {
            PUBLIC,
            PROTECTED,
            PRIVATE,
            PRIVATE_PROTECTED,
            INTERNAL,
            PROTECTED_INTERNAL
        };
        static const std::vector< std::string > ACCESS_MODIFIERS;
        explicit ClassUnit( const std::string& name );
        void add( const std::shared_ptr< Unit >& unit, Flags flags );

    protected:
        std::string m_name;
        std::vector< Fields > m_fields;
};

#endif // CLASSUNIT_H
