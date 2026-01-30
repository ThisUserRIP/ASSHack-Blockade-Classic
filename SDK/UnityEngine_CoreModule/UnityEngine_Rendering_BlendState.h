#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_RenderTargetBlendState.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetBlendState; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct BlendState
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState m_BlendState0;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState m_BlendState1;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState m_BlendState2;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState m_BlendState3;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState m_BlendState4;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState m_BlendState5;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState m_BlendState6;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState m_BlendState7;
		uint8_t m_SeparateMRTBlendStates;
		uint8_t m_AlphaToMask;
		int16_t m_Padding;
		static UnityEngine_CoreModule::UnityEngine::Rendering::BlendState get_defaultValue();
		void _ctor(bool separateMRTBlend, bool alphaToMask);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::BlendState other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

