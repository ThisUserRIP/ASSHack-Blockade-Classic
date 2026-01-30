#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct PlayerConnectionInternal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void UnityEngine_IPlayerEditorConnectionNative_SendMessage(mscorlib::System::Guid messageId, IL2CPP::Array<uint8_t>* data, int32_t playerId);
		bool UnityEngine_IPlayerEditorConnectionNative_TrySendMessage(mscorlib::System::Guid messageId, IL2CPP::Array<uint8_t>* data, int32_t playerId);
		void UnityEngine_IPlayerEditorConnectionNative_Poll();
		void UnityEngine_IPlayerEditorConnectionNative_RegisterInternal(mscorlib::System::Guid messageId);
		void UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal(mscorlib::System::Guid messageId);
		void UnityEngine_IPlayerEditorConnectionNative_Initialize();
		bool UnityEngine_IPlayerEditorConnectionNative_IsConnected();
		void UnityEngine_IPlayerEditorConnectionNative_DisconnectAll();
		static bool IsConnected();
		static void Initialize();
		static void RegisterInternal(mscorlib::System::String* messageId);
		static void UnregisterInternal(mscorlib::System::String* messageId);
		static void SendMessage(mscorlib::System::String* messageId, IL2CPP::Array<uint8_t>* data, int32_t playerId);
		static bool TrySendMessage(mscorlib::System::String* messageId, IL2CPP::Array<uint8_t>* data, int32_t playerId);
		static void PollInternal();
		static void DisconnectAll();
		void _ctor();
	};
}

