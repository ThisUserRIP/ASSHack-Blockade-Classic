#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UNETModule::UnityEngine::Networking
{
	struct ConnectionSimulatorConfig : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_OutMinDelay;
		int32_t m_OutAvgDelay;
		int32_t m_InMinDelay;
		int32_t m_InAvgDelay;
		float m_PacketLossPercentage;
		void _ctor(int32_t outMinDelay, int32_t outAvgDelay, int32_t inMinDelay, int32_t inAvgDelay, float packetLossPercentage);
		void Dispose();
		void Finalize();
	};
}

