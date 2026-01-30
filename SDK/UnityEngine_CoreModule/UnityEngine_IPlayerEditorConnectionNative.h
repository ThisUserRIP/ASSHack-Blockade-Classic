#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
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

namespace UnityEngine_CoreModule::UnityEngine
{
	struct IPlayerEditorConnectionNative
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Initialize();
		void DisconnectAll();
		void SendMessage(mscorlib::System::Guid messageId, IL2CPP::Array<uint8_t>* data, int32_t playerId);
		bool TrySendMessage(mscorlib::System::Guid messageId, IL2CPP::Array<uint8_t>* data, int32_t playerId);
		void Poll();
		void RegisterInternal(mscorlib::System::Guid messageId);
		void UnregisterInternal(mscorlib::System::Guid messageId);
		bool IsConnected();
	};
}

