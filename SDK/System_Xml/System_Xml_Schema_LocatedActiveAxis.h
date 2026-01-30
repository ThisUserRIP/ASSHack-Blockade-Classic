#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_ActiveAxis.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct KeySequence; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct Asttree; };

namespace System_Xml::System::Xml::Schema
{
	struct LocatedActiveAxis : System_Xml::System::Xml::Schema::ActiveAxis
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t column;
		bool isMatched;
		System_Xml::System::Xml::Schema::KeySequence* Ks;
		int32_t get_Column();
		void _ctor(System_Xml::System::Xml::Schema::Asttree* astfield, System_Xml::System::Xml::Schema::KeySequence* ks, int32_t column);
		void Reactivate(System_Xml::System::Xml::Schema::KeySequence* ks);
	};
}

