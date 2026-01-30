#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Text::RegularExpressions { struct Regex; };
namespace mscorlib::System::Collections { struct ArrayList; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Text::RegularExpressions { struct Match; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace System::System::Text::RegularExpressions
{
	struct MatchCollection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Text::RegularExpressions::Regex* _regex;
		mscorlib::System::Collections::ArrayList* _matches;
		bool _done;
		mscorlib::System::String* _input;
		int32_t _beginning;
		int32_t _length;
		int32_t _startat;
		int32_t _prevlen;
		struct StaticFields
		{
			int32_t infinite;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System::Text::RegularExpressions::Regex* regex, mscorlib::System::String* input, int32_t beginning, int32_t length, int32_t startat);
		System::Text::RegularExpressions::Match* GetMatch(int32_t i);
		int32_t get_Count();
		mscorlib::System::Object* get_SyncRoot();
		bool get_IsSynchronized();
		System::Text::RegularExpressions::Match* get_Item(int32_t i);
		void CopyTo(mscorlib::System::Array* array, int32_t arrayIndex);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		static void _cctor();
		void _ctor();
	};
}

