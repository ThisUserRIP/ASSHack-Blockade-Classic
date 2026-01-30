#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_ColorWriteMask.h"
#include "UnityEngine_Rendering_BlendMode.h"
#include "UnityEngine_Rendering_BlendOp.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct RenderTargetBlendState
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t m_WriteMask;
		uint8_t m_SourceColorBlendMode;
		uint8_t m_DestinationColorBlendMode;
		uint8_t m_SourceAlphaBlendMode;
		uint8_t m_DestinationAlphaBlendMode;
		uint8_t m_ColorBlendOperation;
		uint8_t m_AlphaBlendOperation;
		uint8_t m_Padding;
		static UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState get_defaultValue();
		void _ctor(UnityEngine_CoreModule::UnityEngine::Rendering::ColorWriteMask writeMask, UnityEngine_CoreModule::UnityEngine::Rendering::BlendMode sourceColorBlendMode, UnityEngine_CoreModule::UnityEngine::Rendering::BlendMode destinationColorBlendMode, UnityEngine_CoreModule::UnityEngine::Rendering::BlendMode sourceAlphaBlendMode, UnityEngine_CoreModule::UnityEngine::Rendering::BlendMode destinationAlphaBlendMode, UnityEngine_CoreModule::UnityEngine::Rendering::BlendOp colorBlendOperation, UnityEngine_CoreModule::UnityEngine::Rendering::BlendOp alphaBlendOperation);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetBlendState other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

