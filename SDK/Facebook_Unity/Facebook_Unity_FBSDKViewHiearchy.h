#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Facebook_Unity::Facebook::Unity { struct FBSDKCodelessPathComponent; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };

namespace Facebook_Unity::Facebook::Unity
{
	struct FBSDKViewHiearchy : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool CheckGameObjectMatchPath(UnityEngine_CoreModule::UnityEngine::GameObject* go, mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKCodelessPathComponent>* path);
		static bool CheckPathMatchPath(mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKCodelessPathComponent>* goPath, mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKCodelessPathComponent>* path);
		static mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKCodelessPathComponent>* GetPath(UnityEngine_CoreModule::UnityEngine::GameObject* go);
		static mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKCodelessPathComponent>* GetPath(UnityEngine_CoreModule::UnityEngine::GameObject* go, int32_t limit);
		static UnityEngine_CoreModule::UnityEngine::GameObject* GetParent(UnityEngine_CoreModule::UnityEngine::GameObject* go);
		static mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* GetAttribute(UnityEngine_CoreModule::UnityEngine::GameObject* obj, UnityEngine_CoreModule::UnityEngine::GameObject* parent);
	};
}

