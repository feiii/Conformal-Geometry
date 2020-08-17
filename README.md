# Conformal-Geometry

Here, I want to display some fun projects that applys conformal gemetry.

First one is a piece of video plays Tom and Jerry on the surface of a torus (torus.mp4). Notice how smoothly the video is playing with no image distortion! A brief introduction of how it was done is given in below:

The torus is equipped with a triangulation so that the Riemannian surface is discretized. On each triangle (actually on the whole torus) we endow a differential form. According to Hodge theory, any differential 1-form can be decomposed into a closed form, a coclosed form and a harmonic form. We use this fact to remove the closed and coclosed part and leaves with a harmonic 1-form on the torus. Then we may construct a holomorphic 1-form using the harmonic 1-forms and their hodge star counterparties. Finally, we can construct a holomorphic map from plane to the torus that maps the video onto the torus. The map will be locally conformal, hence it preserves angles, and this is why the video quality is so good and no local image distortion is visible!
