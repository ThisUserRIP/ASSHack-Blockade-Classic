#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace UnityEngine_CoreModule::UnityEngine::SceneManagement
{
	struct Scene
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_Handle;
		static bool IsValidInternal(int32_t sceneHandle);
		static mscorlib::System::String* GetNameInternal(int32_t sceneHandle);
		static bool GetIsLoadedInternal(int32_t sceneHandle);
		static int32_t GetRootCountInternal(int32_t sceneHandle);
		static void GetRootGameObjectsInternal(int32_t sceneHandle, mscorlib::System::Object* resultRootList);
		int32_t get_handle();
		bool IsValid();
		mscorlib::System::String* get_name();
		bool get_isLoaded();
		int32_t get_rootCount();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* GetRootGameObjects();
		void GetRootGameObjects(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* rootGameObjects);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
	};
}

