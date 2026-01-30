#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_DecalManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::vp_DecalManager* instance;
			mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* m_Decals;
			float m_MaxDecals;
			float m_FadedDecals;
			float m_NonFadedDecals;
			float m_FadeAmount;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static float get_MaxDecals();
		static void set_MaxDecals(float value);
		static float get_FadedDecals();
		static void set_FadedDecals(float value);
		static void _cctor();
		void _ctor();
		static void Add(UnityEngine_CoreModule::UnityEngine::GameObject* decal);
		static void FadeAndRemove();
		static void Refresh();
		static void DebugOutput();
	};
}

