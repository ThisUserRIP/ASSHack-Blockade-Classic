#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlAtomicValue.h"
namespace System_Xml::System::Xml::Schema { struct XmlAtomicValue; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlAtomicValue_Union
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool boolVal;
		double dblVal;
		int64_t i64Val;
		int32_t i32Val;
		mscorlib::System::DateTime dtVal;
	};
}

