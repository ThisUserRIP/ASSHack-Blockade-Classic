#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_JSONSerializeModule::UnityEngine
{
	struct JsonUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* ToJsonInternal(mscorlib::System::Object* obj, bool prettyPrint);
		static mscorlib::System::Object* FromJsonInternal(mscorlib::System::String* json, mscorlib::System::Object* objectToOverwrite, mscorlib::System::Type* type);
		static mscorlib::System::String* ToJson(mscorlib::System::Object* obj);
		static mscorlib::System::String* ToJson(mscorlib::System::Object* obj, bool prettyPrint);
		static mscorlib::System::Object* FromJson(mscorlib::System::String* json, mscorlib::System::Type* type);
		static void FromJsonOverwrite(mscorlib::System::String* json, mscorlib::System::Object* objectToOverwrite);
	};
}

