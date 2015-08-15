#pragma once

namespace glStateUtils
{
	GLenum	ConvertCullMode(u32 Mode);
	GLenum	ConvertCmpFunction(u32 Func);
	GLenum	ConvertStencilOp(u32 Op);
	GLenum	ConvertBlendArg(u32 Arg);
	GLenum	ConvertBlendOp(u32 Op);
	GLenum	ConvertTextureAddressMode(u32 Mode);
};