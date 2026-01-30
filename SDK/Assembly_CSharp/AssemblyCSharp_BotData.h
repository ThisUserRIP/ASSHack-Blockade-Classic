#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp { struct BotEquipmentContainer; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp { struct Sound; };
#include "ITEM.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Assembly_CSharp { struct Block; };
namespace Assembly_CSharp { struct BotPoseController; };
namespace Assembly_CSharp { struct TeamColor; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::AssemblyCSharp
{
	struct BotData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* Item;
		UnityEngine_CoreModule::UnityEngine::Vector3 position;
		UnityEngine_CoreModule::UnityEngine::Vector3 rotation;
		uint8_t Dead;
		int32_t Helmet;
		int32_t HelmetHealth;
		int32_t Skin;
		int32_t Ha1;
		int32_t Ha2;
		int32_t Ha3;
		int32_t Znak;
		uint8_t CountryID;
		int32_t WeaponID;
		UnityEngine_CoreModule::UnityEngine::Vector3 oldpos;
		Assembly_CSharp::BotEquipmentContainer* botEquipment;
		int32_t Stats_Kills;
		int32_t Stats_Deads;
		mscorlib::System::String* uid;
		int32_t pwID;
		int32_t swID;
		int32_t mwID;
		UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition;
		bool inVehicle;
		int32_t inVehiclePos;
		mscorlib::System::String* ClanName;
		int32_t ClanID;
		int32_t AnimState;
		uint8_t Team;
		mscorlib::System::String* Name;
		bool Active;
		int32_t State;
		float flash_time;
		Assembly_CSharp::Sound* mySound;
		mscorlib::System::Collections::Generic::Dictionary_2<Assembly_CSharp::ITEM, UnityEngine_CoreModule::UnityEngine::GameObject>* goHelmets;
		mscorlib::System::Collections::Generic::Dictionary_2<Assembly_CSharp::ITEM, UnityEngine_CoreModule::UnityEngine::GameObject>* goSkinMask;
		mscorlib::System::Collections::Generic::Dictionary_2<Assembly_CSharp::ITEM, UnityEngine_CoreModule::UnityEngine::GameObject>* goMasks;
		mscorlib::System::Collections::Generic::Dictionary_2<Assembly_CSharp::ITEM, UnityEngine_CoreModule::UnityEngine::GameObject>* goHats;
		mscorlib::System::Collections::Generic::Dictionary_2<Assembly_CSharp::ITEM, UnityEngine_CoreModule::UnityEngine::GameObject>* goAttaches;
		bool zombie;
		int32_t blockFlag;
		int32_t currBlockType;
		Assembly_CSharp::Block* b;
		Assembly_CSharp::Block* bUp;
		Assembly_CSharp::BotPoseController* botPoser;
		Assembly_CSharp::TeamColor* TC;
		void _ctor();
	};
}

