#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct ArrayList; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "System_Xml_Schema_Position.h"
namespace System_Xml::System::Xml::Schema { struct Position; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct Positions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ArrayList* positions;
		int32_t Add(int32_t symbol, mscorlib::System::Object* particle);
		System_Xml::System::Xml::Schema::Position get_Item(int32_t pos);
		int32_t get_Count();
		void _ctor();
	};
}

