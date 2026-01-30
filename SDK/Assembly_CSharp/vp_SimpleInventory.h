#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };
namespace Assembly_CSharp { struct vp_SimpleInventory_InventoryItemStatus; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp { struct vp_SimpleInventory_InventoryWeaponStatus; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp
{
	struct vp_SimpleInventory : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::vp_FPPlayerEventHandler* m_Player;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_SimpleInventory_InventoryItemStatus>* m_ItemTypes;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_SimpleInventory_InventoryWeaponStatus>* m_WeaponTypes;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::vp_SimpleInventory_InventoryItemStatus>* m_ItemStatusDictionary;
		Assembly_CSharp::vp_SimpleInventory_InventoryWeaponStatus* m_CurrentWeaponStatus;
		int32_t m_RefreshWeaponStatusIterations;
		void OnEnable();
		void OnDisable();
		void Awake();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::vp_SimpleInventory_InventoryItemStatus>* get_ItemStatusDictionary();
		bool HaveItem(mscorlib::System::Object* name);
		Assembly_CSharp::vp_SimpleInventory_InventoryItemStatus* GetItemStatus(mscorlib::System::String* name);
		Assembly_CSharp::vp_SimpleInventory_InventoryWeaponStatus* GetWeaponStatus(mscorlib::System::String* name);
		void RefreshWeaponStatus();
		int32_t get_OnValue_CurrentWeaponAmmoCount();
		void set_OnValue_CurrentWeaponAmmoCount(int32_t value);
		int32_t get_OnValue_CurrentWeaponClipCount();
		mscorlib::System::String* get_OnValue_CurrentWeaponClipType();
		int32_t OnMessage_GetItemCount(mscorlib::System::String* name);
		bool OnAttempt_DepleteAmmo();
		bool OnAttempt_AddAmmo(mscorlib::System::Object* arg);
		bool OnAttempt_AddItem(mscorlib::System::Object* args);
		bool OnAttempt_RemoveItem(mscorlib::System::Object* args);
		bool OnAttempt_RemoveClip();
		bool CanStart_SetWeapon();
		void OnStop_SetWeapon();
		void OnStart_Dead();
		void _ctor();
	};
}

