#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct CoreMatrixUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void MatrixTimesTranslation(UnityEngine_CoreModule::UnityEngine::Matrix4x4& inOutMatrix, UnityEngine_CoreModule::UnityEngine::Vector3 translation);
		static void TranslationTimesMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4& inOutMatrix, UnityEngine_CoreModule::UnityEngine::Vector3 translation);
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 MultiplyPerspectiveMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 perspective, UnityEngine_CoreModule::UnityEngine::Matrix4x4 rhs);
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 MultiplyOrthoMatrixCentered(UnityEngine_CoreModule::UnityEngine::Matrix4x4 ortho, UnityEngine_CoreModule::UnityEngine::Matrix4x4 rhs);
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 MultiplyGenericOrthoMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 ortho, UnityEngine_CoreModule::UnityEngine::Matrix4x4 rhs);
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 MultiplyOrthoMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 ortho, UnityEngine_CoreModule::UnityEngine::Matrix4x4 rhs, bool centered);
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 MultiplyProjectionMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 projMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4 rhs, bool orthoCentered);
	};
}

