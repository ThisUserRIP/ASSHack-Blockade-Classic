#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct SkinManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture*>* badges;
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture*>* gosts;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture*>>* new_tex_skin;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture*>>* new_tank_skin;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, UnityEngine_CoreModule::UnityEngine::Texture>* new_tex_skin_emissive;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Texture* GetBadge(int32_t id);
		static UnityEngine_CoreModule::UnityEngine::Texture* GetSkinEmissive(int32_t skin);
		static UnityEngine_CoreModule::UnityEngine::Texture* GetSkin(int32_t team, int32_t skin);
		static UnityEngine_CoreModule::UnityEngine::Texture* GetTankSkin(int32_t skin, int32_t team);
		static void Init();
		void _ctor();
		static void _cctor();
	};
}

