#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp_firstpass::RootMotion
{
	struct Hierarchy : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool HierarchyIsValid(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones);
		static UnityEngine_CoreModule::UnityEngine::Object* ContainsDuplicate(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* objects);
		static bool IsAncestor(UnityEngine_CoreModule::UnityEngine::Transform* transform, UnityEngine_CoreModule::UnityEngine::Transform* ancestor);
		static bool ContainsChild(UnityEngine_CoreModule::UnityEngine::Transform* transform, UnityEngine_CoreModule::UnityEngine::Transform* child);
		static void AddAncestors(UnityEngine_CoreModule::UnityEngine::Transform* transform, UnityEngine_CoreModule::UnityEngine::Transform* blocker, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>& array);
		static UnityEngine_CoreModule::UnityEngine::Transform* GetAncestor(UnityEngine_CoreModule::UnityEngine::Transform* transform, int32_t minChildCount);
		static UnityEngine_CoreModule::UnityEngine::Transform* GetFirstCommonAncestor(UnityEngine_CoreModule::UnityEngine::Transform* t1, UnityEngine_CoreModule::UnityEngine::Transform* t2);
		static UnityEngine_CoreModule::UnityEngine::Transform* GetFirstCommonAncestor(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* transforms);
		static UnityEngine_CoreModule::UnityEngine::Transform* GetFirstCommonAncestorRecursive(UnityEngine_CoreModule::UnityEngine::Transform* transform, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* transforms);
		static bool IsCommonAncestor(UnityEngine_CoreModule::UnityEngine::Transform* transform, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* transforms);
		void _ctor();
	};
}

