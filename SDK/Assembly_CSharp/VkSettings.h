#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct VkSettings : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t VkAppId;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* scope;
		bool forceOAuth;
		bool revoke;
		mscorlib::System::String* apiVersion;
		bool notify;
		bool friends;
		bool photos;
		bool audio;
		bool video;
		bool docs;
		bool notes;
		bool pages;
		bool status;
		bool wall;
		bool groups;
		bool messages;
		bool notifications;
		bool stats;
		bool ads;
		bool offline;
		bool nohttps;
		bool stories;
		bool plus256;
		bool email;
		bool market;
		void Awake();
		void generateScope();
		void ProcessAuthUrl();
		void _ctor();
	};
}

