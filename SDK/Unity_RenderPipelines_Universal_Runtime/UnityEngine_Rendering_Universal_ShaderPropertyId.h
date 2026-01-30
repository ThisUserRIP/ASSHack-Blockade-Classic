#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ShaderPropertyId : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t glossyEnvironmentColor;
			int32_t subtractiveShadowColor;
			int32_t ambientSkyColor;
			int32_t ambientEquatorColor;
			int32_t ambientGroundColor;
			int32_t time;
			int32_t sinTime;
			int32_t cosTime;
			int32_t deltaTime;
			int32_t timeParameters;
			int32_t scaledScreenParams;
			int32_t worldSpaceCameraPos;
			int32_t screenParams;
			int32_t projectionParams;
			int32_t zBufferParams;
			int32_t orthoParams;
			int32_t viewMatrix;
			int32_t projectionMatrix;
			int32_t viewAndProjectionMatrix;
			int32_t inverseViewMatrix;
			int32_t inverseProjectionMatrix;
			int32_t inverseViewAndProjectionMatrix;
			int32_t cameraProjectionMatrix;
			int32_t inverseCameraProjectionMatrix;
			int32_t worldToCameraMatrix;
			int32_t cameraToWorldMatrix;
			int32_t sourceTex;
			int32_t scaleBias;
			int32_t scaleBiasRt;
			int32_t rendererColor;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
	};
}

