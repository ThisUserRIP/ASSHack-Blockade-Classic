#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct SampleDescriptor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _IsLabel_k__BackingField;
		mscorlib::System::Type* _Type_k__BackingField;
		mscorlib::System::String* _DisplayName_k__BackingField;
		mscorlib::System::String* _Description_k__BackingField;
		bool _IsSelected_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::GameObject* _UnityObject_k__BackingField;
		bool get_IsLabel();
		void set_IsLabel(bool value);
		mscorlib::System::Type* get_Type();
		void set_Type(mscorlib::System::Type* value);
		mscorlib::System::String* get_DisplayName();
		void set_DisplayName(mscorlib::System::String* value);
		mscorlib::System::String* get_Description();
		void set_Description(mscorlib::System::String* value);
		bool get_IsSelected();
		void set_IsSelected(bool value);
		UnityEngine_CoreModule::UnityEngine::GameObject* get_UnityObject();
		void set_UnityObject(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		bool get_IsRunning();
		void _ctor(mscorlib::System::Type* type, mscorlib::System::String* displayName, mscorlib::System::String* description);
		void CreateUnityObject();
		void DestroyUnityObject();
	};
}

