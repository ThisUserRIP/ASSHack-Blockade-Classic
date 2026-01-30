#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_UI::UnityEngine::UI { struct IClipper; };
namespace UnityEngine_UI::UnityEngine::UI::Collections { template <typename T> struct IndexedSet_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct ClipperRegistry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Collections::IndexedSet_1<UnityEngine_UI::UnityEngine::UI::IClipper>* m_Clippers;
		struct StaticFields
		{
			UnityEngine_UI::UnityEngine::UI::ClipperRegistry* s_Instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static UnityEngine_UI::UnityEngine::UI::ClipperRegistry* get_instance();
		void Cull();
		static void Register(UnityEngine_UI::UnityEngine::UI::IClipper* c);
		static void Unregister(UnityEngine_UI::UnityEngine::UI::IClipper* c);
	};
}

