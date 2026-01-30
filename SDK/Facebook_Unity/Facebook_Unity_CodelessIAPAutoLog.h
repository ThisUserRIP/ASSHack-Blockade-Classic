#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace mscorlib::System { struct String; };

namespace Facebook_Unity::Facebook::Unity
{
	struct CodelessIAPAutoLog : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void handlePurchaseCompleted(mscorlib::System::Object* data);
		static void addListenerToIAPButtons(mscorlib::System::Object* listenerObject);
		static void addListenerToGameObject(UnityEngine_CoreModule::UnityEngine::Object* gameObject, mscorlib::System::Object* listenerObject);
		static mscorlib::System::Type* FindTypeInAssemblies(mscorlib::System::String* typeName, mscorlib::System::String* nameSpace);
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* FindObjectsOfTypeByName(mscorlib::System::String* typeName, mscorlib::System::String* nameSpace);
		static mscorlib::System::Object* GetField(mscorlib::System::Object* inObj, mscorlib::System::String* fieldName);
		static mscorlib::System::Object* GetProperty(mscorlib::System::Object* inObj, mscorlib::System::String* propertyName);
	};
}

