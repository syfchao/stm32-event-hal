
/*******************************************************************************
 * INCLUDE DIRECTIVES
 ******************************************************************************/

#include "error_status.hpp"

using namespace hal::device;


/*******************************************************************************
 * CONSTRUCTORS & DESTRUCTOR
 ******************************************************************************/

ErrorStatus::ErrorStatus(ErrorCode code): code{code}
{
}


/*******************************************************************************
 * OPERATOR IMPLEMENTATIONS
 ******************************************************************************/

ErrorStatus::operator bool() const
{
    return code != ErrorCode::Success;
}

bool ErrorStatus::operator!() const
{
    return code == ErrorCode::Success;
}

/*******************************************************************************
 * PRIVATE METHOD IMPLEMENTATIONS
 ******************************************************************************/

/*******************************************************************************
 * PROTECTED METHOD IMPLEMENTATIONS
 ******************************************************************************/

/*******************************************************************************
 * PUBLIC METHOD IMPLEMENTATIONS
 ******************************************************************************/

ErrorCode ErrorStatus::get_code() const
{
    return code;
}
