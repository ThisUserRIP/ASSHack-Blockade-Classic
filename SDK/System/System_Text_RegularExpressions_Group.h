#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_RegularExpressions_Capture.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::Text::RegularExpressions
{
	struct Group : System::Text::RegularExpressions::Capture
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* _caps;
		int32_t _capcount;
		mscorlib::System::String* _name;
		struct StaticFields
		{
			System::Text::RegularExpressions::Group* _emptygroup;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* text, IL2CPP::Array<int32_t>* caps, int32_t capcount, mscorlib::System::String* name);
		bool get_Success();
		static void _cctor();
		void _ctor();
	};
}

