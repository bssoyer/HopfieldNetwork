# Hopfield Network for Pattern Recall in C

## Introduction

This project simply implements a Hopfield network using the C programming language. It demonstrates the network's ability to function as an associative (content-addressable) memory, capable of recalling a stored pattern when presented with a noisy or incomplete version. This example focuses on storing and recalling simple patterns like digital digits on a grid.

### Hopfield Networks
A Hopfield network is a recurrent artificial neural network popularized by John Hopfield. Key characteristics include:
* **Recurrent Connections:** Neurons are typically fully connected (often excluding self-connections), and information flows cyclically through the network.
* **Associative Memory:** They can store patterns as stable states (attractors) in the network's dynamics.
* **Pattern Completion/Correction:** When initialized with a partial or corrupted pattern, the network state evolves iteratively until it converges (hopefully) to the closest stored pattern. This is achieved by minimizing an associated "energy" function.

### Hebbian Learning
The network in this project is trained using a principle derived from **Hebbian learning**. This biologically inspired concept is often summarized as "neurons that fire together, wire together." In practice for this Hopfield network:

* The connection strengths (weights) between neurons are calculated based on the correlation between neuron states in the patterns to be stored.
* If two neurons are typically in the same state (+1/+1 or -1/-1) across the stored patterns, their connection weight is strengthened (positive).
* If they are typically in opposite states (+1/-1), the connection weight becomes inhibitory (negative).
* This process shapes the network's energy landscape, creating stable minima corresponding to the stored reference patterns.

This implementation allows exploration of fundamental Hopfield network dynamics and the application of Hebbian learning for pattern storage and recall.

