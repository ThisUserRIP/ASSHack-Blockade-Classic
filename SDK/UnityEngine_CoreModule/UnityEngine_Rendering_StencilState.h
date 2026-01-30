#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_CompareFunction.h"
#include "UnityEngine_Rendering_StencilOp.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct StencilState
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t m_Enabled;
		uint8_t m_ReadMask;
		uint8_t m_WriteMask;
		uint8_t m_Padding;
		uint8_t m_CompareFunctionFront;
		uint8_t m_PassOperationFront;
		uint8_t m_FailOperationFront;
		uint8_t m_ZFailOperationFront;
		uint8_t m_CompareFunctionBack;
		uint8_t m_PassOperationBack;
		uint8_t m_FailOperationBack;
		uint8_t m_ZFailOperationBack;
		static UnityEngine_CoreModule::UnityEngine::Rendering::StencilState get_defaultValue();
		void _ctor(bool enabled, uint8_t readMask, uint8_t writeMask, UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction compareFunction, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp passOperation, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp failOperation, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp zFailOperation);
		void _ctor(bool enabled, uint8_t readMask, uint8_t writeMask, UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction compareFunctionFront, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp passOperationFront, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp failOperationFront, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp zFailOperationFront, UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction compareFunctionBack, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp passOperationBack, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp failOperationBack, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp zFailOperationBack);
		bool get_enabled();
		void set_enabled(bool value);
		uint8_t get_readMask();
		uint8_t get_writeMask();
		void SetCompareFunction(UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction value);
		void SetPassOperation(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value);
		void SetFailOperation(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value);
		void SetZFailOperation(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value);
		UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction get_compareFunctionFront();
		void set_compareFunctionFront(UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction value);
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp get_passOperationFront();
		void set_passOperationFront(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value);
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp get_failOperationFront();
		void set_failOperationFront(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value);
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp get_zFailOperationFront();
		void set_zFailOperationFront(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value);
		UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction get_compareFunctionBack();
		void set_compareFunctionBack(UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction value);
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp get_passOperationBack();
		void set_passOperationBack(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value);
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp get_failOperationBack();
		void set_failOperationBack(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value);
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp get_zFailOperationBack();
		void set_zFailOperationBack(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::StencilState other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

