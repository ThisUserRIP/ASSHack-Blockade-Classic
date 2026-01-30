#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facebook_MiniJSON_Json.h"
namespace Facebook_Unity::Facebook::MiniJSON { struct Json; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace mscorlib::System::Collections { struct IList; };

namespace Facebook_Unity::Facebook::MiniJSON
{
	struct Json_Serializer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Text::StringBuilder* builder;
		void _ctor();
		static mscorlib::System::String* Serialize(mscorlib::System::Object* obj);
		void SerializeValue(mscorlib::System::Object* value);
		void SerializeObject(mscorlib::System::Collections::IDictionary* obj);
		void SerializeArray(mscorlib::System::Collections::IList* array);
		void SerializeString(mscorlib::System::String* str);
		void SerializeOther(mscorlib::System::Object* value);
	};
}

