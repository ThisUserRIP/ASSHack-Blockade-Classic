#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Text::RegularExpressions { struct MatchCollection; };
namespace System::System::Text::RegularExpressions { struct Match; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace System::System::Text::RegularExpressions
{
	struct MatchEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Text::RegularExpressions::MatchCollection* _matchcoll;
		System::Text::RegularExpressions::Match* _match;
		int32_t _curindex;
		bool _done;
		void _ctor(System::Text::RegularExpressions::MatchCollection* matchcoll);
		bool MoveNext();
		mscorlib::System::Object* get_Current();
		void Reset();
	};
}

