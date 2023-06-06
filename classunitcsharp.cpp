#include "classunitcsharp.h"
std::string ClassUnitCSharp::compile( unsigned int level ) const
{
    std::string result = generateShift( level ) + "class " + m_name + " {\n";
    for( size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i ) {
        if( m_fields[i].empty() ) {
            continue;
        }

        for( const auto& f :m_fields[i] ) {
            result += generateShift( level+1)+ACCESS_MODIFIERS[ i ] + " ";
            result += f->compile( level );
        }
//        result += "\n";
    }
    result += generateShift( level ) + "};\n";
    return result;
}

void ClassUnitCSharp::add( const std::shared_ptr< Unit >& unit, Flags flags )
{
    int accessModifier = PRIVATE;
    if( flags < ACCESS_MODIFIERS.size() ) {
        accessModifier = flags;
    }
    m_fields[ accessModifier ].push_back( unit );
}

const std::vector< std::string > ClassUnitCSharp:: ACCESS_MODIFIERS = { "public","protected", "private", "private protected","internal","protected internal"};

