#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Text::RegularExpressions { struct GroupCollection; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace System::System::Text::RegularExpressions { struct Capture; };

namespace System::System::Text::RegularExpressions
{
	struct GroupEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Text::RegularExpressions::GroupCollection* _rgc;
		int32_t _curindex;
		void _ctor(System::Text::RegularExpressions::GroupCollection* rgc);
		bool MoveNext();
		mscorlib::System::Object* get_Current();
		System::Text::RegularExpressions::Capture* get_Capture();
		void Reset();
	};
}

