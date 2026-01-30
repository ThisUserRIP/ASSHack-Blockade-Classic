#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Utils::Libraries::TinyJson
{
	struct JsonWriter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Action_2<mscorlib::System::Text::StringBuilder, mscorlib::System::Object>* bQfPQvjbNvjVqVqfdcSUBmnKlXcI;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Action_2<mscorlib::System::Text::StringBuilder, mscorlib::System::Object>* get_appendValueDelegate();
		static mscorlib::System::String* ToJson(mscorlib::System::Object* item);
		static void MMsBhLqnUyFJOJPGXJPYTgSMElfK(mscorlib::System::Text::StringBuilder* A_0, mscorlib::System::Object* A_1);
	};
}

