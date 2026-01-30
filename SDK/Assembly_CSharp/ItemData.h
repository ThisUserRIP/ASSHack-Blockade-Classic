#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp { struct WeaponUpgrade; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct ItemData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t ItemID;
		int32_t Type;
		int32_t Category;
		int32_t ShowStatus;
		int32_t Theme;
		bool InOffer;
		int32_t Animation;
		int32_t Lvl;
		int32_t CostGold;
		float CostSocial;
		float CostSocial2;
		int32_t Count;
		IL2CPP::Array<IL2CPP::Array<Assembly_CSharp::WeaponUpgrade*>*>* Upgrades;
		IL2CPP::Array<int32_t>* MyUpgrades;
		int32_t LastCount;
		int32_t DateEnd;
		UnityEngine_CoreModule::UnityEngine::Texture2D* icon;
		UnityEngine_CoreModule::UnityEngine::GameObject* preview;
		UnityEngine_CoreModule::UnityEngine::GameObject* weaponObject;
		mscorlib::System::String* MyName;
		mscorlib::System::String* Desc;
		int32_t module_index;
		bool canUpgrade;
		mscorlib::System::String* refgo;
		mscorlib::System::String* refgoRoot;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::GameObject* weaponCam;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void SetNameAndDesc();
		void _ctor(int32_t _ItemID, int32_t _Type, int32_t _Category, int32_t _Lvl, int32_t _ShowStatus, int32_t _Theme, int32_t _CostGold, int32_t _CostSocial, int32_t _Count);
		void RefreshIcon();
	};
}

